# Write your MySQL query statement below
SELECT user_id AS buyer_id, join_date, SUM(CASE WHEN YEAR(order_date)=2019 THEN 1 ELSE 0 END) AS orders_in_2019
FROM Users t1 LEFT JOIN Orders t2 ON t1.user_id=t2.buyer_id
GROUP BY user_id, join_date