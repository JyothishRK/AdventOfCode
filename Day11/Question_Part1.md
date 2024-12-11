---

# Day 11: Plutonian Pebbles  

---

## Story  

The ancient civilization on Pluto was known for its ability to manipulate spacetime, and while **The Historians** explore their infinite corridors, you've noticed a strange set of **physics-defying stones**.  

At first glance, they seem like normal stones: they're arranged in a perfectly straight line, and each stone has a **number engraved on it**.  

The strange part is that every time you **blink**, the stones **change**.  

Sometimes, the number engraved on a stone changes. Other times, a stone might **split in two**, causing all the other stones to **shift over** a bit to make room in their perfectly straight line.  

---

## Stone Behavior  

As you observe them for a while, you find that the stones have a consistent behavior. Every time you blink, the stones each simultaneously change according to the **first applicable rule** in this list:  

1. If the stone is engraved with the number `0`, it is replaced by a stone engraved with the number `1`.  
2. If the stone is engraved with a number that has an **even number of digits**, it is replaced by **two stones**:  
   - The **left half** of the digits are engraved on the new left stone.  
   - The **right half** of the digits are engraved on the new right stone.  
   - *Leading zeroes are not preserved*: `1000` would become stones `10` and `0`.  
3. If none of the other rules apply, the stone is replaced by a new stone engraved with the old stone's number **multiplied by 2024**.  

The stones always preserve their **order** in the line.  

---

## Example  

### Initial Arrangement  

Five stones:  
```
0 1 10 99 999  
```

### Blink 1  

- Stone `0` → `1` (Rule 1).  
- Stone `1` → `2024` (Rule 3).  
- Stone `10` → `1 0` (Rule 2).  
- Stone `99` → `9 9` (Rule 2).  
- Stone `999` → `2021976` (Rule 3).  

**New arrangement:**  
```
1 2024 1 0 9 9 2021976  
```

---

### Longer Example  

#### Initial Arrangement  
```
125 17  
```

#### Blink 1  
```
253000 1 7  
```

#### Blink 2  
```
253 0 2024 14168  
```

#### Blink 3  
```
512072 1 20 24 28676032  
```

#### Blink 4  
```
512 72 2024 2 0 2 4 2867 6032  
```

#### Blink 5  
```
1036288 7 2 20 24 4048 1 4048 8096 28 67 60 32  
```

#### Blink 6  
```
2097446912 14168 4048 2 0 2 4 40 48 2024 40 48 80 96 2 8 6 7 6 0 3 2  
```  

---

## Additional Detail  

In this example:  

- After **blinking six times**, you would have `22 stones`.  
- After **blinking 25 times**, you would have `55,312 stones`.  

---

## Task  

Consider the arrangement of stones in front of you.  

**How many stones will you have after blinking 25 times?**  

---