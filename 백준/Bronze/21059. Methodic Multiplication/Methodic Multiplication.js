const fs = require('fs');

function main() {
    let [x, y] = fs.readFileSync('/dev/stdin').toString().trim().split('\n');
    let cnt = (x.split('S').length - 1) * (y.split('S').length - 1);

    console.log('S('.repeat(cnt) + '0' + ')'.repeat(cnt));
}

main();