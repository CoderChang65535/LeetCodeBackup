SELECT DISTINCT l1.num as ConsecutiveNums
FROM `logs` as l1,`logs` as l2,`logs` as l3
WHERE l1.id = l2.id-1 AND l2.id = l3.id-1 AND l1.num = l2.num AND l3.num = l2.num