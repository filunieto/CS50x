-- Keep a log of any SQL queries you execute as you solve the mystery.
--theft took place on July 28, 2020  on Chamberlin Street.
/*
The THIEF is: Ernest
The thief ESCAPED TO: London
The ACCOMPLICE is: Berthold
*/

SELECT CR.id, "description",  day || '/'|| month || '/' || year as fecha  FROM "crime_scene_reports" CR
WHERE CR."street" = 'Chamberlin Street'
ORDER by month, day ;

/*
Theft of the CS50 duck took place at 10:15am at
 the Chamberlin Street courthouse. Interviews were
 conducted today with three witnesses who were present
 at the time — each of their interview transcripts mentions the courthouse.
 28/7/2020
ID 295
*/
SELECT I.name, I.transcript, day || '/'|| month || '/' || year as fecha
FROM interviews I
WHERE fecha = '28/7/2020';

/*
Ruth
Sometime within ten minutes of the theft, I saw the thief get into a car in the courthouse parking lot and drive away. If you have security footage from the courthouse parking lot, you might want to look for cars that left the parking lot in that time frame.
Eugene (1)
I don't know the thief's name, but it was someone I recognized. Earlier this morning, before I arrived at the courthouse, I was walking by the ATM on Fifer Street and saw the thief there withdrawing some money.
Raymond (2)
As the thief was leaving the courthouse, they called someone who talked to them for less than a minute. In the call, I heard the thief say that they were planning to take the earliest flight out of Fiftyville tomorrow. The thief then asked the person on the other end of the phone to purchase the flight ticket.(3)
*/


SELECT PE.name FROM people PE
JOIN "courthouse_security_logs" CO on PE.license_plate = CO.license_plate
WHERE CO.day || '/'|| CO.month || '/' || CO.year = '28/7/2020'  and hour = 10 and minute BETWEEN 14 AND 27 and activity = 'exit'  ;
*/
Patrick
Ernest
Amber
Danielle
Roger
Elizabeth
Russell
Evelyn
*/
SELECT DISTINCT PE.name FROM people PE
JOIN "bank_accounts" BA on BA."person_id" = PE."id"
JOIN "atm_transactions" AT on AT."account_number" = BA."account_number"
WHERE AT.day || '/'|| AT.month || '/' || AT.year = '28/7/2020' AND "transaction_type" = 'withdraw' and "atm_location" = 'Fifer Street';
*/
Danielle
Bobby
Madison
Ernest
Roy
Elizabeth
Victoria
Russell

Despues de las conusltas de arriba tenemos a :
Ernest
Russell
Elizabeth
Danielle
*/
SELECT DISTINCT PE.name FROM people PE
JOIN "phone_calls" PH on PH."caller" =  PE."phone_number"
WHERE PH.day || '/'|| PH.month || '/' || PH.year = '28/7/2020' and PH."duration" <= 60;

Ernest
Russell

received the call
SELECT DISTINCT PE.name FROM people PE
JOIN "phone_calls" PH on PH."receiver" =  PE."phone_number"
WHERE PH.day || '/'|| PH.month || '/' || PH.year = '28/7/2020' and PH."duration" <= 60;
Jack
Larry
Berthold
Danielle
Melissa
James
Philip
Jacqueline
Doris
Anna


SELECT DISTINCT PE.name, FL.hour, FL.minute, AI.city, AI2.city FROM people PE
JOIN passengers PA on PA."passport_number" = PE."passport_number"
JOIN "flights" FL on PA."flight_id" = FL."id"
JOIN "airports" AI on AI."id" = FL."origin_airport_id"
JOIN "airports" AI2 on AI2."id" = FL."destination_airport_id"

WHERE FL.day || '/'|| FL.month || '/' || FL.year = '29/7/2020' ORDER by FL.hour LIMIT 0,7

Doris	8	20	Fiftyville	London
Roger	8	20	Fiftyville	London
Ernest	8	20	Fiftyville	London
Edward	8	20	Fiftyville	London
Evelyn	8	20	Fiftyville	London
Madison	8	20	Fiftyville	London
Bobby	8	20	Fiftyville	London

SELECT DISTINCT PE.name, PH.caller, PH.receiver, PH.day, PH.month, PH.year FROM people PE
JOIN "phone_calls" PH on PH."receiver" =  PE."phone_number"

WHERE PH.day || '/'|| PH.month || '/' || PH.year = '28/7/2020' and PH."duration" <= 60 and PH.caller = (SELECT DISTINCT PH.caller FROM people PE
JOIN "phone_calls" PH on PH."caller" =  PE."phone_number"
WHERE PH.day || '/'|| PH.month || '/' || PH.year = '28/7/2020' and PH."duration" <= 60 AND PE.name = 'Ernest')

Berthold	(367) 555-5533	(375) 555-8161	28	7	2020


