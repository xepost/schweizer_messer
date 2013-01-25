#ifndef SM_LOGGER_HPP
#define SM_LOGGER_HPP

#include <string>


namespace sm {
    namespace logging {
        
        class LoggingEvent;
        
        class Logger
        {
        public:
            Logger();
            virtual ~Logger();
            
            double currentTimeSecondsUtc() const;
            std::string currentTimeString() const;
            
            void log(const LoggingEvent & event);
        protected:
            virtual double currentTimeSecondsUtcImplementation() const = 0;
            virtual std::string currentTimeStringImplementation() const = 0;
            virtual void logImplementation(const LoggingEvent & event) = 0;
        };

    } // namespace logging
} // namespace sm


#endif /* SM_LOGGER_HPP */
