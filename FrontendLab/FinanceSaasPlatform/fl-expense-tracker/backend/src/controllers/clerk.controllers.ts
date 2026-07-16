import { Request, Response } from "express";
import { User } from "../models/user.model"
const clerkWebhook = async (req: Request, res: Response) => {
    try {
        const { type: eventType, data } = req.body;
        const { first_name, last_name, image_url } = data || {};
        const email = data.email_addresses[0].email_address;

        let fullName = "";
        if (last_name) {
            fullName = `${first_name} ${last_name}`;
        } else {
            fullName = first_name;
        }

        switch(eventType) {
            case "user.created":
                const isUserDetailEmpty = [email, fullName, image_url].some((field) => field.trim() === "");
                if (isUserDetailEmpty) {
                    return res.status(400).json({ message: "All fields are required" });
                }

                const existedUser = await User.findOne({email});

                if(existedUser) {
                    return res.status(409).json({message: "User with email already exists"});
                }

                const user = await User.create({
                    fullName,
                    email,
                    imageUrl: image_url
                });

                if(!user) {
                    return res.status(500).json({message: "Something went weong while registering the user"});
                }
                break;
            default:
                return res.status(200).json({message: `Unhandled webhook event type: ${eventType}`});
        }

        return res.status(201).json({message: "User created Successfully"})
    } catch(error) {
        return res.status(500).json({ message: "Interval Server Error" });
    }
}

export {clerkWebhook}