var arr = [94, 54, 67, 22, 45, 76];

for (let i = 0; i < arr.length; i++) {

    for (let j = 0; j < arr.length; j++) {
        if (arr[j] > arr[j + i]) {
            let temp = arr[j];
            arr[j] = arr[j + i];
            arr[j + 1] = temp;
        }
    }
}
console.log("Sorted array is : " + arr);
console.log("The thard largest number is :" + arr[arr.length - 3]);