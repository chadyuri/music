//
//  Presenter.h
//

#import <Foundation/Foundation.h>
#import <UIKit/UIKit.h>

@interface Presenter : UIImageView

@property (nonatomic, strong) id model;

/**
 *  This is an abstract method and should be overridden
 */
- (void)reloadData;

@end
