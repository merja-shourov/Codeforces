print("Welcome to the tip calculator!")
bill = float(input("What was your total bill? $"))
tip = int(input("What percentage tip would you like to give? 10, 12, or 15? %"))
people = int(input("How many people to split the bill? "))

bill_with_tip = bill + ( bill * tip/100)

per_person_bill = bill_with_tip / people
per_person_bill_round = round(per_person_bill, 2 )

final_bill = "{:.2f}".format(per_person_bill)

print(final_bill)

