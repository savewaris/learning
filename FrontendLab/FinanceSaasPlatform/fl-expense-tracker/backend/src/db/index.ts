const connectDB = async () => {
    try {
        const connectionInstance = await mongoose.connect(process.env.MONGO_URI!);
        console.log("MongoDB connected:", connectionInstance.connnection.host);
    } catch (error) {
        console.log("MongoDB connection:", error);
        process.exit(1)
    }
}

export default connectDB;