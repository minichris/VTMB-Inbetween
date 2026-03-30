# What this is
A proof of concept to show its possible to add new items to Vampire The Masqurade - Bloodlines.

# How to use this
1) Have VS build vampire.dll. You may need to adjust the project settings in visual studio because currently its going to try to build it to where my VTMB install is.
2) Go to your "VtMB\Vampire\dlls" folder, and rename the "vampire.dll" there to "vampire2.dll".
3) Copy in your new vampire.dll
4) Create two new items at "vdata\items\item_k_example_new_key.txt" and "vdata\items\item_k_example_new_key2.txt"
5) Go in game. You should now be able to run "give item_k_example_new_key" and "give item_k_example_new_key2" in the console successfully.

# How this works
dllmain.cpp is split into two main parts, the proxy / trampoline region, and the rest of it. The proxy region allows this dll to forward all the functionality of the original DLL to the orginial DLL.

##DllMain weirdness 
You may notice theres some weird stuff going on in DllMain. Basically, as far as I can tell, something in the original dll effectively inspects the exports to figure out what can be spawned in. 
So to deal with this, we get the original Dll's reference to itself and patch our replacement one into it. This means that the game can see item_k_example_new_key and item_k_example_new_key2.
Its not just enough to export these from our proxy / trampoline DLL (idk if this counts as a trampoline, if anyone knows better please correct me).

## The rest of it
CreateExampleKeyEntity is mostly just reverse engineered using ghidra from examples of key items found in bloodlines, specifically, item_k_kiki_key. 
It seems like most keys in bloodlines are children of a base key class, which may be the only reason why this works, and I've accidentally got lucky and this technique won't work for anything else.

# Adding new keys
Just add a new block like this 


extern "C" void* __cdecl item_k_example_new_key3(void) {
	static const char kClassname[] = "item_k_example_new_key3";  // must match export / maps
	return CreateExampleKeyEntity(kClassname);
}

and a new entry to the .def file like 

`item_k_example_new_key3 @594`

and the new entry at vdata\items. Thats it. Idk yet if it works well with anything other than keys but I wanna expand on it.

# Wow, this is amazing, how can I thank you!?
[Follow me on Twitter](https://x.com/Zaperox). [Visit my website](https://shortparse.co.uk/)!
[Buy my silly boomer shooter on steam](https://store.steampowered.com/app/1317020/77p_egg_Eggwife/) and wishlist my [upcoming silly puzzle game / anomly game / walking sim](https://store.steampowered.com/app/3796740/77p_egg_Cubicle_77/).
