# Practical 1: Shell Programming (Address Book)

Interactive shell script providing options to create, view, insert, delete, and modify records in `addressbook.txt`.

## Execution

```bash
chmod +x address_book.sh
./address_book.sh
```

## Operations Supported

1. Create Address Book (`touch addressbook.txt`)
2. View Address Book (`cat addressbook.txt`)
3. Insert Record (Format: `LastName,FirstName,Email,Phone`)
4. Delete Record (Search by pattern and delete by line number with `sed`)
5. Modify Record (Search, locate line, and replace with `sed`)
6. Exit

## Notes & Viva

- Shebang (`#!/bin/bash`): Directs kernel to execute the script with bash interpreter.
- `grep -n`: Searches the file and prints matching lines along with their line numbers.
- `sed -i "${line}d" filename`: In-place deletion of a specific line number.
- `sed -i "${line}s/.*/newRecord/" filename`: In-place replacement of a line with new text.
- `test -s filename`: Checks if file exists and has size greater than zero.
