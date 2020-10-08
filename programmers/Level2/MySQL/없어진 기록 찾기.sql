SELECT b.ANIMAL_ID, b.NAME
FROM ANIMAL_INS a right join ANIMAL_OUTS b on a.ANIMAL_ID = b.ANIMAL_ID
WHERE a.ANIMAL_ID IS NULL
ORDER BY b.ANIMAL_ID
