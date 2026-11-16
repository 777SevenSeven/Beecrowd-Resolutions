SELECT 
    packages.year,
    u_sender.name AS sender,
    u_receiver.name AS receiver
FROM packages
JOIN users AS u_sender
    ON u_sender.id = packages.id_user_sender
JOIN users AS u_receiver
    ON u_receiver.id = packages.id_user_receiver
WHERE (packages.color = 'blue' OR packages.year = 2015)
  AND u_sender.address != 'Taiwan'
  AND u_receiver.address != 'Taiwan'
ORDER BY packages.year DESC;
