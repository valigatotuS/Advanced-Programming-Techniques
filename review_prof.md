# Review Phd student

Overall its good that you made different files and separated each purpose. Be careful though, as you tend to make a file per function. If it can be good for clarity but it can also become a problem in bigger projects, where you will end up with a million files. My opinion on this (and every programmer has its own habits I think) is: you should combine items into logical groupings and create your files based on that. For object-oriented programming, limit yourself to one heavyweight class per header and implementation file.
It's really good you learned github, it's something necessary and that will serve you well later.

wpo1: You do not free the allocated memory after convolution. Here it could be considered okay as you end the program after doing the convolution, but if your program would continue after that, it could cause problems. It's better to take the habit of immediately freeing when you malloc, then you can move the freeing later on to where you need it to happen. I suppose it's just an omission, as you free for the string exercise. Otherwise very good.
wpo2: very good
wpo3: Unless I didn't find it, you did not really answer the exercise. You made a union with a float and its floating-point representation, but you did not emulate a sum of 2 floats using this representation. The point was to take two numbers, for example 1020 and 4, do operations on their mantissa and exponent to get the sum 1024 as resulting number.
wpo4: very good
wpo5: The idea seems really good, but the code is not super easy to understand as it is. It could use a bit more comments and/or more descriptive variable names. The problem with generic names is that it works when the code stays simple (like in the first wpos), but when the code becomes bigger and more complicated, it can be hard to understand. This is especially important for when you go back to your code after a while and you want to understand what you did, or for someone else to understand it. If I remember correctly it is exactly what happened as you struggled to understand yourself your code and explain it to me during the oral exam.

To explain more in details, here is what I tell the 2Ba students:

"Descriptive variable names are essential, especially for complex programs. Often, descriptive names require using multiple words. Don’t be afraid to use long variable names.

In the following example, the value 3600 is assigned to the variable s :

s = 3600
The name s is totally ambiguous. Using a full word makes it a lot easier to understand what the code means:

seconds = 3600
seconds is a better name than s because it provides more context. But it still doesn’t convey the full meaning of the code. Is 3600 the number of seconds it takes for some process to ﬁnish, or the length of a movie? There’s no way to tell.

The following name leaves no doubt about what the code means:

seconds_per_hour = 3600
When you read the above code, there is no question that 3600 is the number of seconds in one hour. Although seconds_per_hour takes longer to type than both the single letter s and the word seconds, the pay-oﬀ in clarity is massive.

Although naming variables descriptively means using longer variable names, you should avoid names that are excessively long. What “excessively long” really means is subjective, but a good rule of thumb is to keep variable names to fewer than three or four words."

When everything is called similarly path_t, paths, path, node_t, node, nodes, etc. it can become really hard to follow.
But overal it is very good work on the exercises!

Your grade for the exam was: 80%.

Best Regards,
Thibault