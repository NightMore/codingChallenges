# Introduction

Calculating age or time passed after a specific date.
Current version does not support:
	*adding birth date in exact hours, minutes or seconds.

# The following text is pseudo-code:

c = current
o = old (day of birth. IDK why not b) 
a = age
t = temporary (var.)
	
# Getting current age
	
cYear  - oYear  = aYear
cMonth - oMonth = aMonth
cDay   - oDay   = aDay

# Correcting current age

if(aYear <= 1)
	Error: bad date

if(aMonth <= 1)
	aMonth = 12 - aMonth
	aYear--

if(aDay <= 1)
	aDay = 30 - aDay
	aMonth--
	
if(cYear % 4 = 0) 
	leap = floor(aYear / 4)
else 
	tYear = aYear - (cYear % 4 = 0)
	leap = floor(aYear / 4)

aDay = aDay + leap

if(aDay >= 31) // if aDay becomes higher, due to leap days
	aDay = aDay - 31
	aMonth++

# Calculating current age in differnt units of time

in millennia (1000 years)
	millennia = aYear / 1000

in centuries (100 years)
	centuries = aYear / 100

in decades (100 years)
	decades = aYear / 10

in years ()
	years = aYear + aMonth / 12

in full months (12 months in a year)
	months = aYear * 12 + aMonth
	7-31, 4-30, 1-28/29 (months with number of days)

in days (365 days in a year, 28-31 days every month (including leap days))
	days = aYear * 365 + leap + aMonth * 30 + aMonth % 2 - 1 + aDay

in julian years (365.25 days)
	jYears = days / 365.25

in lustrums (5 years)
	lustrums = years / 5

in fortnights (14 days)
	fortnights = days / 14

in week (7 days)
	weeks = days / 7

in hours (24 in a day, 168 every week)
	hours = days * 24

in minutes (60 minutes in an hour, 1440 every day)
	minutes = hours * 60

in seconds (60 seconds in a minute, 3600 every hour, 86400 each day)
	seconds = minutes * 60

and so on... (just extra zeroes, taking up useful ram, at this point)
