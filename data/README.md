# Data Directory
The data/ directory contains a series of English wordlists used by the program to generate word searches.

## Source - SCOWL
These wordlists are derived from [SCOWL (Spell Checker Oriented Word Lists)](http://wordlist.aspell.net/), created and maintained by **Kevin Atkinson**, with significant contributions from **Alan Beale**.

SCOWL groups English words into frequency tiers. For example, .10 = top 10% most frequent, .20 covers the next 10%. I combined the .10 and .20 tiers and split the words by length to produce the files for this project.

## Naming & Organisation
The wordlists are split up based on their frequency in the English language and their length. Files are Organised as follows:

```scowl_english_<frequency_band>.<length>.txt```

- ```<frequency_band>``` corresponds to the percentile tier. If the words are in the top 10 percentile, we would put ```top10``` here. If words from multiple percentiles are combined, we list all of the percentiles of the sources, i.e., ```scowl_english_top10_top20_top30.4.txt```.
- ```<length>``` is the number of characters in each word.

## Example File Names
```scowl_english_top10.3.txt``` - 3 letter words in the top 10%.
```scowl_english_top20.5.txt``` - 5 letter words in the 10–20% tier.
```scowl_english_top10_top20.7.txt``` - combined tier, 7 letter words.