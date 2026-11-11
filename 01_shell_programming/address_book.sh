#!/bin/bash
filename="address_book.txt"

while true; do
    echo -e "\n--- Address Book Menu ---"
    echo "1. Create Address Book"
    echo "2. View Address Book"
    echo "3. Insert Record"
    echo "4. Search Record"
    echo "5. Delete Record"
    echo "6. Exit"
    read -p "Enter your choice: " choice

    case $choice in
        1)
            > "$filename"
            echo "Address book created successfully."
            ;;
        2)
            if [ -f "$filename" ]; then
                echo "--- Records ---"
                cat "$filename"
            else
                echo "Address book does not exist."
            fi
            ;;
        3)
            read -p "Enter Name: " name
            read -p "Enter Phone: " phone
            read -p "Enter Email: " email
            echo "$name | $phone | $email" >> "$filename"
            echo "Record added."
            ;;
        4)
            read -p "Enter name to search: " sname
            grep -i "$sname" "$filename" || echo "Record not found."
            ;;
        5)
            read -p "Enter name to delete: " dname
            grep -iv "$dname" "$filename" > temp.txt && mv temp.txt "$filename"
            echo "Record deleted if it existed."
            ;;
        6)
            exit 0
            ;;
        *)
            echo "Invalid choice!"
            ;;
    esac
done
