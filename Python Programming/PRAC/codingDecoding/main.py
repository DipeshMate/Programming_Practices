
while(True):
 st = input("Enter a Message: ")
 coding = int(input("1 for Coding 0 for decoding: "))
 words = st.split(" ")
 if(coding):
    print("Coding Your Word")
    nword=[]
    for word in words:
       if(len(word)>=3):
           r1 = "DHK"
           r2 = "JKL"
           stnew = r2 + word[1:] + word[0] + r1
           nword.append(stnew)
       else:
           nword.append(word[::-1])
    #print(nword) #this is print list ['JKLhistDHK', 'si', 'JKLoodgDHK']
    print(" ".join(nword)) # this will print string  " JKLhistDHK si JKLoodgDHK "
              
 else:
    print("Decoding Your Word")
    nword=[]
    for word in words:
       if(len(word)>=3):
           stnew = word[3:-3]
           stnew = stnew[-1]+ stnew[:-1] 
           nword.append(stnew)
       else:
           nword.append(word[::-1])
    print(" ".join(nword))
