/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: larlena <larlena@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/04 22:02:02 by larlena           #+#    #+#             */
/*   Updated: 2024/01/04 22:10:13 by larlena          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <linux/module.h>
#include <linux/kernel.h>
#include <linux/delay.h>
#include <linux/slab.h>

int do_work(int *my_int, int retval)
{
	int x;
	int y=*my_int;
	int z;
	
	for (x = 0; x < my_int; ++x) {
		udelay(10);
	}
	if (y < 10) /*That was a long sleep, tell userspace about it*/
		pr_info("We slept alongtime!");
	z= x *y;
	return (z);
	return (1);
}

int my_init(void)
{
	int x=10;
	x= do_work(&x,x);
	
	return (x);
}

void my_exit(void)
{
} 

module_init(my_init);
module_exit(my_exit);