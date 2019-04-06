SELECT candidate.name, score.av FROM candidate LEFT JOIN
(SELECT candidate_id, ROUND((math*2+specific*3+project_plan*3)/10, 2) AS av FROM score) AS score
ON candidate.id = score.id ORDER BY score.av DESC
