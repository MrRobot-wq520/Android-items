#!/data/data/com.termux/files/usr/bin/bash
cd $(dirname $0)

## Start pulseaudio
pulseaudio --start --load="module-native-protocol-tcp auth-ip-acl=127.0.0.1 auth-anonymous=1" --exit-idle-time=-1

## Set login shell for different distributions
login_shell=$(grep "^root:" "ubuntu-fs/etc/passwd" | cut -d ':' -f 7)

## unset LD_PRELOAD in case termux-exec is installed
unset LD_PRELOAD

## Proot Command
command="proot"
## uncomment following line if you are having FATAL: kernel too old message.
#command+=" -k 4.14.81"
command+=" --link2symlink"
command+=" --kill-on-exit"
command+=" -0"
command+=" -r ubuntu-fs"
command+=" -b /dev"
command+=" -b /dev/null:/proc/sys/kernel/cap_last_cap"
command+=" -b /dev/null:/proc/stat"
command+=" -b /dev/urandom:/dev/random"
command+=" -b /proc"
command+=" -b /proc/self/fd:/dev/fd" 
command+=" -b /proc/self/fd/0:/dev/stdin"
command+=" -b /proc/self/fd/1:/dev/stdout"
command+=" -b /proc/self/fd/2:/dev/stderr"
command+=" -b ubuntu-fs/binds/.sysctl_inotify_max_user_watches:/proc/sys/fs/inotify/max_user_watches"
command+=" -b /sys"
command+=" -b /data/data/com.termux/files/usr/tmp:/tmp"
command+=" -b ubuntu-fs/tmp:/dev/shm"
command+=" -b /data/data/com.termux"
command+=" -b /sdcard"
command+=" -b /mnt"
command+=" -w /root"
command+=" /usr/bin/env -i"
command+=" HOME=/root"
command+=" PATH=/usr/local/sbin:/usr/local/bin:/bin:/usr/bin:/sbin:/usr/sbin:/usr/games:/usr/local/games"
command+=" TERM=$TERM"
command+=" LANG=C.UTF-8"
command+=" $login_shell"
if [ -z "$1" ];then
    $command
else
    if [ "$1" == "-r" ]; then
        echo "Removing rootfs directory..."
        chmod u+rwx ubuntu-fs
        rm -rf ubuntu.sh
        rm -rf ubuntu-fs
        echo "Done!"
    else
        $command -c "$@"
    fi
fi
