# [Silver V] Tree Skiing - 34440 

[문제 링크](https://www.acmicpc.net/problem/34440) 

### 성능 요약

메모리: 2020 KB, 시간: 0 ms

### 분류

수학, 조합론

### 제출 일자

2026년 3월 30일 01:48:24

### 문제 설명

<p>After a long drive, you and your friend have arrived at the ski slope. There is a ton of new snow, the sun is shining, and you are both feeling adventurous! When you get off the lift, you see that a new run has been opened through the trees. Strangely, the trees in this forest have grown in a perfectly compass-aligned grid.</p>

<p>Your friend heads off down the slope weaving her way around the trees. Eventually, she stops in a clearing to make a snow angel. You want to join her to make a snow angel as well, but you do not want to waste the opportunity to ski on the fresh powder. You go looking for a new path through the forest.</p>

<p>You can't ski straight down the mountain to your friend because there are trees in the way. At each clearing you have an option to head directly north or directly west out of the clearing. You don't want to climb back uphill to the south or east. Once you pass the clearing and enter the next, you have to make the same decision again and again. How many different ways can you ski through the trees until you reach the clearing where your friend is playing in the snow, without skiing on <em>exactly</em> the same path as she skied and without hitting a tree on your way down?</p>

<p style="text-align: center;"><img alt="" src="https://upload.acmicpc.net/485ad4a3-61ec-4bdc-b8bd-8710250aba31/-/preview/" style="width: 200px; height: 197px;"></p>

<p style="text-align: center;"><strong>Figure 1</strong>: Representation of Sample Input 1. In pink, your friend's path down the mountain. In blue, your two possible paths.</p>

### 입력 

 <p>The first line of input contains an integer $1 \leq n \leq 20$. The second line of input contains $n$ characters separated by spaces which specify, in order, the directions your friend went at each clearing. The characters are limited to <code>N</code> for north and <code>W</code> for west.</p>

### 출력 

 <p>The output should contain a single integer: the number of other possible paths you could take to meet up with your friend. For example, in Sample Input $1$ there are $3$ paths total to the clearing where your friend is making snow angels. Your friend went north, north again, then west. You can go either north, west, then north <em>or</em> west, north, then north. So there are $2$ new ways for you to get to the clearing. Note that the output could be $0$ if, for example, your friend took the only path to the clearing.</p>

