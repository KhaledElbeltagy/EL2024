#!/usr/bin/python3


# importing the calendar module
import calendar
# initializing the year and month
year = int(input("please Enter The Year : ") ) 
month = int(input("please Enter The Month : ") )

# printing the calendar
print(calendar.month(year, month))