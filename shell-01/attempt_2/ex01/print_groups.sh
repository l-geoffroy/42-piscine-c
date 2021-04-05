groups=$(groups $FT_USER | sed 's/ /,/g')
printf '%s' "$groups"