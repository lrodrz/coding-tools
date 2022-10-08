#!/usr/bin/env python

import os

# artsy title 
print('\n')
print('/'*50,'\n',' '*2,'WELCOME TO THE SCP FILE TRANSFER PROGRAM')
print('/'*50,)
print('/'*25,)
print('/'*10,)

# begin input parts

fi_of_interest = input('\n\nWhat & where is the file? \n(eg. path/to/file.xyz)\nIf needed use command \' $ pwd \' \n\nEnter here --> ')

usern = input('\nWhat is the destination username?\nEnter here --> ' )

destin_host = input('\nWhat is the destination hostname?\n(eg. example.website.com)\nEnter here --> ')

print('\nLet\'s check if we have all the correct information',
'\nYour file of interest: ', fi_of_interest,
'\nYour destinations username: ', usern,
'\nYour destination hostname: ', destin_host,
        )


check = input('\nIs this correct? (y/n): ')
check = str(check)

scp_protocol = 'ssh ' + str(usern) + '@' + str(destin_host) + ':' + fi_of_interest + ' .'

if check == 'n':
    print('\nTry again...\n...Program Exiting')
    exit()
elif check == 'y':
    print('\n\nCopy the following and paste it into your terminal')
    print(' ')
    print(str(scp_protocol))
    print(' ')
else:
    print('Error 1: Closing...')
    print('maybe wrong letter or use lower case?')
    exit()

#
