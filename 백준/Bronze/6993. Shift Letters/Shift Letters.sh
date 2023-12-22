main() {
    local T s n

    read T

    for (( i = 0; i < T; i++ )); do
        read s n

        echo -n "Shifting $s by $n positions gives us: ${s:$(( ${#s} - n ))}"
        echo ${s:0:$(( ${#s} - n ))}
    done
}

main