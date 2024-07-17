import firelink

print(" IF you need to add new URL  : Write add")
print("THE Favourite WEBSITE")
print(firelink.favourite.keys())

link=input("please Enter you choice: ")
if link != "add":
    firelink.firfox(link.strip())
else:
    shrtcut=input("please Enter you shortcut: ")
    url=input("please Enter you Link : ")
    firelink.favourite.setdefault(shrtcut,url)
    print(firelink.favourite)
    firelink.firfox(shrtcut.strip())