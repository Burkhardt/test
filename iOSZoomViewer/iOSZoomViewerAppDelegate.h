//
//  iOSZoomViewerAppDelegate.h
//  iOSZoomViewer
//
//  Created by RSB on 6/10/11.
//  Copyright 2011 __MyCompanyName__. All rights reserved.
//

#import <UIKit/UIKit.h>

@class iOSZoomViewerViewController;

@interface iOSZoomViewerAppDelegate : NSObject <UIApplicationDelegate> {

}

@property (nonatomic, retain) IBOutlet UIWindow *window;

@property (nonatomic, retain) IBOutlet iOSZoomViewerViewController *viewController;

@end
