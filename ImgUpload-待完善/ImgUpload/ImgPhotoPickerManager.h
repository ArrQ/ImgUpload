//
//  ImgPhotoPickerManager.h
//  ImgUpload
//
//  Created by ArrQ on 2017/9/12.
//  Copyright © 2017年 ArrQ. All rights reserved.
//

#import <Foundation/Foundation.h>
#import <UIKit/UIKit.h>

#import <AVFoundation/AVFoundation.h>

@interface ImgPhotoPickerManager : NSObject

+ (instancetype)shareInstace;

typedef void (^CompelitionBlock)(NSMutableArray *imageArray);

- (void)showActionSheetInView:(UIView *)inView
               fromController:(UIViewController *)fromController
              completionBlock:(CompelitionBlock)completionBlock;


- (void)showActionSheetInView:(UIView *)inView
               fromController:(UIViewController *)fromController andMaxPhoto:(NSInteger)maxPhoto
              completionBlock:(CompelitionBlock)completionBlock;




@end
