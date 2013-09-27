//
//  TDBadgedCell.h
//  TDBadgedTableCell
//	TDBageView
//
//	Any rereleasing of this code is prohibited.
//	Please attribute use of this code within your application
//
//	Any Queries should be directed to hi@tmdvs.me | http://www.tmdvs.me
//	
//  Created by Tim on [Dec 30].
//  Copyright 2009 Tim Davies. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface TDBadgeView : UIView
{
	NSUInteger width;
	NSString *badgeString;
	
	UIColor *badgeColor;
	UIColor *badgeColorHighlighted;	
}

@property (nonatomic, readonly) NSUInteger width;
@property (nonatomic, strong) NSString *badgeString;
@property (nonatomic, weak) UITableViewCell *parent;
@property (nonatomic, strong) UIColor *badgeColor;
@property (nonatomic, strong) UIColor *badgeColorHighlighted;

@end

@interface TDBadgedCell : UITableViewCell {
	NSString *badgeString;
	TDBadgeView *badge;
	
	UIColor *badgeColor;
	UIColor *badgeColorHighlighted;
}

@property (nonatomic, strong) NSString *badgeString;
@property (readonly, strong) TDBadgeView *badge;
@property (nonatomic, strong) UIColor *badgeColor;
@property (nonatomic, strong) UIColor *badgeColorHighlighted;

@end
