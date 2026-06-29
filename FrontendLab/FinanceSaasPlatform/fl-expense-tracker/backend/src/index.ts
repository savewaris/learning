// Database Connection

import { configDotenv } from "dotenv";
import connectDB from "./db";
import app from "./app";

const port = 4001;

configDotenv({ path: "./.env" });

connectDB()
    .then(() => {
        app.listen(port, () => {
            console.log(`Server running at http://localhost:${port}`);
        });
    }).catch((error) => {
        console.log("MongoDB connection failed:", error.message);
    });