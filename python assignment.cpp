/*Python function
Author : Gloria Mwenga
Ren no:BSCIT-01-0155/2024
Date:25 january 2025
Version 1
*/

from datetime import datetime

# Function to calculate fines based on days overdue
def calculate_fine(days_overdue):
    if days_overdue <= 7:
        fine_rate = 20
    elif 8 <= days_overdue <= 14:
        fine_rate = 50
    else:
        fine_rate = 100
    return fine_rate, fine_rate * days_overdue

# Main program
def main():
    # Input details
    book_id = input("Enter Book ID: ")
    due_date = input("Enter Due Date (YYYY-MM-DD): ")
    return_date = input("Enter Return Date (YYYY-MM-DD): ")
    
    # Convert dates to datetime objects
    due_date = datetime.strptime(due_date, "%Y-%m-%d")
    return_date = datetime.strptime(return_date, "%Y-%m-%d")
# Calculate days overdue
    days_overdue = (return_date - due_date).days
    if days_overdue <= 0:
        print("\nThe book is not overdue. No fine.")
        return

    # Calculate fine rate and total fine
    fine_rate, fine_amount = calculate_fine(days_overdue)
    
    # Display details
    print("\nLibrary Fine Details")
    print(f"Book ID: {book_id}")
    print(f"Due Date: {due_date.date()}")
    print(f"Return Date: {return_date.date()}")
    print(f"Days Overdue: {days_overdue}")
    print(f"Fine Rate: Ksh. {fine_rate} per day")
    print(f"Fine Amount: Ksh. {fine_amount}")

# Run the program
if__name__=="__main__":
    main()
