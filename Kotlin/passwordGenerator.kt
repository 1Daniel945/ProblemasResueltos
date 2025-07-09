import kotlin.math.*
private fun readInt() = readln().toInt()
private fun readDouble() = readln().toDouble()
private fun readInts() = readln().split(" ").map { it.toInt() }
 
fun main() {
    val t = readInt()
    repeat (t) {
        var arr = readInts()
        var pass = ""
        var n = '0'
        var c = 'a'
        var C = 'A'
        var x = arr[0]
        while(x > 0){
            pass += n
            n = if (n == '9') '1' else n + 1
            x--
        }
        x = arr[1]
        while(x > 0){
            pass += C
            C = if (C == 'Z') 'A' else C + 1
            x--
        }
        x = arr[2]
        while(x > 0){
            pass += c
            c = if (c == 'z') 'a' else c + 1
            x--
        }
        println(pass)
    }
}