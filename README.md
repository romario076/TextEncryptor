# TextEncryptor
So, this application is uses for text encryption. For example, you have an message and you want to decode it according to a pre-known key.
And nobody will be able to read the message without a key.
It is possible to decode message using your key.

Binary data can easily be "encrypted" with a "key" based on a little boolean operation called an xor, or exclusive or. 
when we xor a single bit (a 1 or 0) with another bit:

if 1 bit is true, and 1 bit is false, it returns true, otherwise it returns false;
sooo:

    1 xor 1 = 0
    1 xor 0 = 1
    0 xor 1 = 1
    0 xor 0 = 0
    
So, using this for your message you can ecrypt it by your own key.
For decoding, apply xor opration again, and you will receive your unecrypted message in binary format.
Last step, is convert from binary to text.

<hr>

### Example:

![alt text](https://user-images.githubusercontent.com/10981310/36056065-d9bea552-0e09-11e8-9b69-e4a7846d7d45.PNG)
