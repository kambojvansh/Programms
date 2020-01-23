var binary = 1100,
    des = 0,
    rem = 0,
    i = 0;
while (binary != 0) {
    rem = parseInt(binary % 10);
    binary = parseInt(binary / 10);
    des += rem * 2 ** i;
    i++;
}
console.log(des);