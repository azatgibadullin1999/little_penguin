/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   hello-world.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: larlena <larlena@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/04 19:42:40 by larlena           #+#    #+#             */
/*   Updated: 2024/01/25 16:35:10 by larlena          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <linux/init.h>
#include <linux/module.h>
MODULE_LICENSE("Dual BSD/GPL");

static int	hello_world_init(void)
{
	printk(KERN_ALERT "Hello world !\n");
	return 0;
}

static void	hello_world_exit(void)
{
	printk(KERN_ALERT "Cleaning up module.\n");
}

module_init(hello_world_init);
module_exit(hello_world_exit);