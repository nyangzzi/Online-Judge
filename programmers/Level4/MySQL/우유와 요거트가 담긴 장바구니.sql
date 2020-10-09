SELECT a.CART_ID
from CART_PRODUCTS a join CART_PRODUCTS b on a.CART_ID = b.CART_ID
where a.CART_ID = b.CART_ID and a.NAME = 'Milk' and b.NAME = 'Yogurt'
order by a.CART_ID
