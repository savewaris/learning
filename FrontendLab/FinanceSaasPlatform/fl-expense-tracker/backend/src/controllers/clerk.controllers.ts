import { Request, Response } from "express";

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

                
        }
    } catch(error) {
        return res.status(500).json({ message: "Interval Server Error" });
    }
}

export {clerkWebhook}