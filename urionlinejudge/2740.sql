SELECT 'Podium: '||team  FROM league UNION ALL ((SELECT id, 'Demoted: '||team FROM league ORDER BY id DESC LIMIT 2) ORDER BY id ASC)

