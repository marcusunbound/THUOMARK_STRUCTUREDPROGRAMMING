# Simple ATM System (C Program)

This project provides a simple ATM system implemented in C.  
It allows users to log in using a PIN, check their account balance, deposit funds, and withdraw funds.

## Features

- **PIN authentication**: Users must enter the correct PIN to access the system.
- **Balance inquiry**: Users can check their current balance.
- **Deposit**: Add money to the account.
- **Withdraw**: Remove money from the account (limited by available balance).
- **Menu system**: Simple text-based menu for easy interaction.

## How to Use

1. **Compile** the program:
    ```bash
    gcc main.c -o atm
    ```

2. **Run** the executable:
    ```bash
    ./atm
    ```

3. **Instructions**:
    - The program will prompt you to enter the PIN (`9876` by default).
    - After successful login, you can navigate the ATM menu:
        - Check balance
        - Deposit funds
        - Withdraw funds
        - Exit

## Example Session

```
Enter pin: 
9876
correct Pin! 
Menu: 
1. Balance Inquiry
2. Deposit
3. Withdraw
4. Exit
```

## Important Notes

- The account balance is initialized at `55,000`.
- PIN is hardcoded as `9876`. You can change this in the source code for testing.
- All data is stored in memory and resets each time the program runs.

## Author

- [marcusunbound](https://github.com/marcusunbound)

---

*Feel free to contribute or extend the project as needed!*