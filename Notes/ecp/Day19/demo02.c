#include<stdio.h>

typedef struct vehicle{
	int veh_no;
	char name[20];
	char veh_type[20];
	float price;
}veh_t;

void print_vehicle(veh_t *);
void accept_vehicle(veh_t *);
void write_vehicle(veh_t);
void read_vehicles(void);
void update_vehicle(int number, float);

int main(void)
{
	veh_t v1;
	//accept_vehicle(&v1);
	//write_vehicle(v1);
	read_vehicles();
	update_vehicle(5464, 34567890.0f);
	printf("------\n");
	read_vehicles();
	return 0;
}
void print_vehicle(veh_t *v)
{
	printf("%d %s %s %f\n", v->veh_no, v->name, v->veh_type, v->price);
}
void accept_vehicle(veh_t *v)
{
	printf("Enter vehicle info (no, name, type, price) : ");
	scanf("%d %s %s %f", &v->veh_no, v->name, v->veh_type, &v->price);
}


void write_vehicle(veh_t v)
{
	FILE *fp = fopen("vehicles.txt", "a");
	fwrite(&v, sizeof(v), 1, fp);
	fclose(fp);	
}

void read_vehicles(void)
{
	veh_t v1;
	FILE *fp = fopen("vehicles.txt", "r");
	while((fread(&v1, sizeof(v1), 1, fp)) != 0)
			print_vehicle(&v1);
	fclose(fp);
}


void update_vehicle(int number, float new_price)
{
	veh_t v1;
	FILE *fp = fopen("vehicles.txt", "r+");
	while((fread(&v1, sizeof(v1), 1, fp)) != 0)
	{
		if(v1.veh_no == number)
		{
			v1.price = new_price;
			fseek(fp, -1 * sizeof(veh_t), SEEK_CUR);
			fwrite(&v1, sizeof(v1), 1, fp);
			break;
		}
	}
	fclose(fp);
}











