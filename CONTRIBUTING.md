#  Contributing Guide

Thank you for your interest in contributing to **Learn-Open-Source**! We welcome contributors of all skill levels. Follow the steps below to make your first contribution.

---

## 1. Fork the Repository

Click the **Fork** button at the top-right of the repository.

Repository: https://github.com/METE0R4/Learn-Open-Source

---

## 2. Clone Your Fork

Replace `YOUR_USERNAME` with your GitHub username.

```bash
git clone https://github.com/YOUR_USERNAME/Learn-Open-Source.git
```

---

## 3. Navigate to the Repository

```bash
cd Learn-Open-Source
```

---

## 4. Add the Original Repository as Upstream (Recommended)

```bash
git remote add upstream https://github.com/METE0R4/Learn-Open-Source.git
```

Verify it:

```bash
git remote -v
```

---

## 5. Create a New Branch

Always create a new branch before making changes.

```bash
git checkout -b feature/your-feature-name
```

Example:

```bash
git checkout -b fix/issue-5
```

---

## 6. Make Your Changes

Work on the issue assigned to you or add your improvements.

---

## 7. Stage Your Changes

```bash
git add .
```

---

## 8. Commit Your Changes

Write a meaningful commit message.

```bash
git commit -m "Add solution for Question 5"
```

---

## 9. Push Your Branch

```bash
git push origin feature/your-feature-name
```

---

## 10. Open a Pull Request

1. Open your fork on GitHub.
2. Click **Compare & pull request**.
3. Add a clear title and description.
4. Submit your Pull Request.

That's it! 

---

# Keeping Your Fork Updated

Before starting a new contribution, sync your fork with the original repository.

```bash
git fetch upstream
git checkout main
git merge upstream/main
git push origin main
```

---

## Contribution Guidelines

- Create **one Pull Request per issue**.
- Keep commits meaningful.
- Put your solutions inside the solutions folder
- Do not commit files such as .exe, .idea etc. Put them inside a .gitignore file.
- Test your code before submitting.
- Be respectful during reviews and discussions.

Happy Contributing! 
