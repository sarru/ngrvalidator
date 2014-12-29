//
//  CalendarEvent.h
//  NGRValidator
//
//  Created by Patryk Kaczmarek on 29.12.2014.
//
//

#import <Foundation/Foundation.h>

@interface CalendarEvent : NSObject

@property (strong, nonatomic) NSString *title;
@property (strong, nonatomic) NSString *creatorLastName;
@property (strong, nonatomic) NSString *email;
@property (strong, nonatomic) NSString *url;
@property (strong, nonatomic) NSDate *startDate;
@property (strong, nonatomic) NSDate *endDate;
@property (assign, nonatomic) BOOL termsOfUse;

- (NSError *)validate;

@end
