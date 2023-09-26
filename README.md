# watonoPerceptionMsgs

### the installation of the msgs
```
cd ~
mkdir msgWs && cd msgWs
git clone git@github.com:aalghooneh/watonoPerceptionMsgs.git
cd watonoPerceptionMsgs
catkin_make
echo "source $PWD/devel/setup.bash" >> ~/.bashrc
cd ~
source .bashrc
```
### make sure you have the definition

```
rosmsg list | grep decode_radars

>
decode_radars/feature
decode_radars/motion
decode_radars/object
decode_radars/prophecy
decode_radars/semantic
decode_radars/track
decode_radars/tracklist
```


