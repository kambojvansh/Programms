var arr = [21, 45, 78, 29, 85, 45];
var searchElement = 29,
    mid, first = 0,
    last = arr.length - 1;

for (let i = 0; i < arr.length; i++) {

    for (let j = 0; j < arr.length; j++) {
        if (arr[j] > arr[j + i]) {
            let temp = arr[j];
            arr[j] = arr[j + i];
            arr[j + 1] = temp;
        }
    }
}
console.log("Sorted array is :- " + arr);
console.log("-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*");
mid = parseInt((first + last) / 2);
while (first <= last) {
    if (arr[mid] == searchElement) {
        console.log("The Element found in " + mid + " position");
        break;
    } else if (arr[mid] > searchElement) {
        first = mid + 1;
    } else {
        last = mid - 1;
        mid = (first + last) / 2;
    }

}
if (first > last) {
    console.log("Element not found");
}