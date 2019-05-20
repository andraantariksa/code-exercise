def final_grade(exam, projects)
  if exam > 90 or projects > 10
    100
  elsif exam > 75 and projects >= 5
    90
  elsif exam > 50 and projects >= 2
    75
  else
    0
  end
end