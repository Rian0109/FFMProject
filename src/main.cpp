#include "genome.h"
#include "utils.h"
#include "test.h"
#include "benchmark.h"

using namespace std;

int main(){
	
	genome g;
	g.get_input();
	g.construct_hash();

	test();
	benchmark(g);
	

/*	
	cout<<"Before hash"<<endl;
	g.construct_hash();
	cout<<"After hash"<<endl;
	g.snp_at(500,2
	//);
	g.snp_at(1,2);//
	g.display_genome();
	g.display_hash();

	g.snp_at(3,2,"CCC");
	g.display_genome();
	g.display_hash();
	g.find("CCC");

	g.snp_at(1,10,g.get_length());
	
	g.display_genome();
	g.display_hash();

	g.snp_at(5,11,g.get_length());

	g.display_genome();
	g.display_hash();

	g.snp_at(5,12,g.get_length());

	g.display_genome();
	g.display_hash();

	g.snp_at(2,5,g.get_length());

	g.display_genome();
	g.display_hash();
*/
	
	return 0;
}
