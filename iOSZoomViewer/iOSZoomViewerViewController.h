//
//  iOSZoomViewerViewController.h
//  iOSZoomViewer
//
//  Created by RSB on 6/10/11.
//  Copyright 2011 __MyCompanyName__. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface iOSZoomViewerViewController : UIViewController {
    UIImageView *thumbnailSizeImage;
    UIScrollView *zoomedImage;
    
}

@property (nonatomic, retain) UIImageView *thumbnailSizeImage;
@property (nonatomic, retain) UIScrollView *zoom 

@end
