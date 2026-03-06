# [Bronze I] Ruben Spawns - 11162 

[문제 링크](https://www.acmicpc.net/problem/11162) 

### 성능 요약

메모리: 2020 KB, 시간: 0 ms

### 분류

그리디 알고리즘, 정렬

### 제출 일자

2026년 3월 6일 16:36:54

### 문제 설명

<p>Being the head judge of a programming contest is no small thing. As with everything good in life, there is that inevitably long list of things that need to be done before it can happen. Fortunately for Ruben, he has recently acquired a machine that at the push of a button, can spawn a small minion for him to do part of his work. He has also hired an assistant to remind him to activate the machine.</p>

<p>There is one caveat with minions. If you have too many of them, they might get lost. So, simply put, fewer is better. After all, someone has to keep track of those minions. Each minion spawned from the machine can work a set amount of units, and then they are “spent” (there exists a recycling machine, but it is hidden in a deep, dark forest somewhere).</p>

<p>The machine itself creates a given number of minions whose work capacities are normally distributed with both µ and σ unknown. The number of minions the machine can spawn in a given time interval is Poisson distributed with intensity λ, also unknown.</p>

<p>What we are interested in is knowing the minimum amount of times Ruben would have to spawn a minion to be sure that all the work gets done. You are given a list of how many work units each of the N minions can work for. The machine will break down completely after having spawned N minions. The machine lets you choose which minion you want spawn next from the list of possible minions, but you can only spawn each once. All minions are unique in their own ways, but they might still have the same work capacity.</p>

### 입력 

 <p>The first line of the input consists of a single integer T, the number of test cases. Each of the following T cases then consist of two lines. The first line has two integers: W, the number of work units Ruben needs completed, and M, the number of minions the machine can spawn. Then follows a line with M integers C<sub>i</sub>, representing how many work units each minion can complete</p>

<ul>
	<li>0 < T ≤ 50</li>
	<li>0 < W ≤ 10000</li>
	<li>0 < M ≤ 100</li>
	<li>0 < C<sub>i</sub> ≤ 100</li>
</ul>

### 출력 

 <p>Output the minimum number of minions needed to complete the workload W, or output “no rest for Ruben” (without the quotes). Please note that you need a capital r in Ruben’s name.</p>

