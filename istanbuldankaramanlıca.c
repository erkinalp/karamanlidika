/* istanbuldankaramanlıca -- İstanbul to Karamanlı Turkish auto-transliterator
@input utf-8 encoded istanbul turkish text written in latin script via standard input
@output utf-8 encoded pseudo-karamanlidic text written in greek script via standard output
Copyright (C) 2018 Erkin Alp Güney

This program is free software; you can redistribute it and/or modify
it under the terms of the GNU Lesser General Public License as
published by the Free Software Foundation; either version 2.1,
or version 3 of the License.

This program is distributed in the hope that it will be useful,
but WITHOUT ANY WARRANTY; without even the implied warranty of
MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
GNU Lesser General Public License for more details.

You should have received a copy of the GNU General Public License
along with this program; if not, write to the Free Software
Foundation, Inc., 59 Temple Place - Suite 330,
Boston, MA 02111-1307, USA. */

int main() {
	char in[2]={0},char out[3]={0};
	while (fread(in,1,2,stdin)==2) {
		switch(in[0]){
		case 'A': puts("Α"); break;// A
		case 'B': puts("Π̈́"); break;// B
		case 'C': puts("ΤΖ"); break; // C
		case 'D': puts("Τ̈́"); break; // D
		case 'E': puts("Ε"); break;// E
		case 'F': puts("Φ"); break;// F
		case 'G': puts("Κ̈́") break;// G
		case 'H': puts("Χ"); break;// H
		case 'I': puts("Ι"); break; // I
		case 'J': puts("ΔΖ"); break; // J
		case 'K': case 'Q': puts("Κ"); break; // K - Q
		case 'L': puts("Λ"); break; // L 
		case 'M': puts("Μ"); break; // M
		case 'N': puts("Ν"); break; // N
		case 'O': puts("Ο"); break; // O
		case 'P': puts("Π"); break; // P
		case 'R': puts("Ρ"); break; // R
		case 'S': puts("Σ"); break; // S
		case 'T': puts("Τ") break; // T
		case 'U': puts("Υ"); break; // U
		case 'V': puts("Β"); break; // V
		case 'W': puts("ϒ"); break; // W
		case 'X': puts("ΚΣ"); break; // X
		case 'Y': puts("Γ"); break; // Y
		case 'Z': puts("Ζ"); break; // Z
		case 'a':  // a
		case 'b':  // b
		case 'c':  // c
		case 'd':  // d
		case 'e':  // e
		case 'f':  // f
		case 'g':  // g
		case 'h':  // h
		case 'i':  // i
		case 'j':  // j
		case 'k': case 'q':  // k - q
		case 'l':  // l
		case 'm':  // m
		case 'n':  // n
		case 'o':  // o
		case 'p':  // p
		case 'r':  // r
		case 's':  // s
		case 't':  // t
		case 'u':  // u
		case 'v':  // v
		case 'w':  // w
		case 'x':  // x
		case 'y':  // y
		case 'z':  // z
		default: fwrite(in,1,2,stdout);
		}
	}
	return 0;
}
