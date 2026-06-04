# 💳 Build a Finance SaaS Platform (FrontendLab)

Welcome to my personal learning repository for building a professional-grade Finance SaaS platform with a complete expense tracking system! This project is based on the tutorial **[Build a Finance SaaS Platform with Nextjs, React, Express](https://www.youtube.com/watch?v=xSqfwfmLdEQ)** by FrontendLab.

---

## 📊 Project Dashboard

- **Current Status**: Active Development (In Progress) ⚙️
- **Target Features**:
  - Secure User Authentication (Clerk)
  - Complete Expense & Income Tracking
  - Real-time Webhooks (Svix)
  - Full-Stack architecture with decoupled Frontend & Backend

---

## 🗂️ Repository Structure

All project files are organized under the [fl-expense-tracker](file:///d:/save/coding/learning/FrontendLab/FinanceSaasPlatform/fl-expense-tracker) directory:

### Backend ([fl-expense-tracker/backend](file:///d:/save/coding/learning/FrontendLab/FinanceSaasPlatform/fl-expense-tracker/backend))
- `src/index.ts` - Main entry point configuring and initializing server & DB.
- `src/app.ts` - Express app setup and middleware configuration.
- `src/db/index.ts` - MongoDB connection logic.
- `package.json` - Node dependencies (Express 5, Mongoose 9, Clerk Express SDK, Svix).

### Frontend ([fl-expense-tracker/frontend](file:///d:/save/coding/learning/FrontendLab/FinanceSaasPlatform/fl-expense-tracker/frontend))
- `app/` - Next.js 16 app directory layout and pages.
- `package.json` - Next.js, React 19, Clerk Next.js SDK, TailwindCSS v4 configuration.

---

## 🛠️ Tech Stack & Tools

- **Frontend**: Next.js 16 (App Router), React 19, TailwindCSS v4, Clerk Auth (Next.js SDK)
- **Backend**: Node.js, Express v5, MongoDB via Mongoose v9, Clerk Express SDK, Svix (for secure webhooks)
- **Language**: TypeScript (frontend & backend)

---

## 🚀 How to Run Locally

### 1. Backend Setup
1. Navigate to the backend directory:
   ```bash
   cd fl-expense-tracker/backend
   ```
2. Install dependencies:
   ```bash
   npm install
   ```
3. Configure environment variables in a `.env` file:
   ```env
   PORT=4001
   MONGO_URI=your_mongodb_uri
   CLERK_PUBLISHABLE_KEY=your_clerk_publishable_key
   CLERK_SECRET_KEY=your_clerk_secret_key
   ```
4. Start development server:
   ```bash
   npm run dev
   ```

### 2. Frontend Setup
1. Navigate to the frontend directory:
   ```bash
   cd fl-expense-tracker/frontend
   ```
2. Install dependencies:
   ```bash
   npm install
   ```
3. Configure environment variables in a `.env.local` file:
   ```env
   NEXT_PUBLIC_CLERK_PUBLISHABLE_KEY=your_clerk_publishable_key
   CLERK_SECRET_KEY=your_clerk_secret_key
   ```
4. Start development server:
   ```bash
   npm run dev
   ```