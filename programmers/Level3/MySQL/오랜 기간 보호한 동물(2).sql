SELECT b.ANIMAL_ID, b.NAME
from ANIMAL_INS a join ANIMAL_OUTS b on a.ANIMAL_ID = b.ANIMAL_ID
where b.DATETIME is not null
order by b.DATETIME - a.DATETIME DESC
limit 2
