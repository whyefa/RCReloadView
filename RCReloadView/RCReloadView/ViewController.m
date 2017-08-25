//
//  ViewController.m
//  RCReloadView
//
//  Created by Wangyefa on 2017/8/25.
//  Copyright © 2017年 血族. All rights reserved.
//

#import "ViewController.h"
#import "RCReloadView.h"
@interface ViewController ()

@end

@implementation ViewController

- (void)viewDidLoad {
	[super viewDidLoad];
	RCReloadView *reload = [[RCReloadView alloc]initWithType:ReloadStyleCryPage desc:@"加载失败, 点击重新加载" clickBlock:^{
		NSLog(@"+++++++++++++++");
	}];
	reload.frame = self.view.bounds;
	[self.view addSubview:reload];
}


- (void)didReceiveMemoryWarning {
	[super didReceiveMemoryWarning];
	// Dispose of any resources that can be recreated.
}


@end
